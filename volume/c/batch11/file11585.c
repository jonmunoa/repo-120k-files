// fichero 11585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11585;

Registro11585 crear_registro11585(int id) {
    Registro11585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
