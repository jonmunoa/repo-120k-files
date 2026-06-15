// fichero 9677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9677;

Registro9677 crear_registro9677(int id) {
    Registro9677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
