// fichero 6173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6173;

Registro6173 crear_registro6173(int id) {
    Registro6173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
