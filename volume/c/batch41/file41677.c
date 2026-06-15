// fichero 41677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41677;

Registro41677 crear_registro41677(int id) {
    Registro41677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
