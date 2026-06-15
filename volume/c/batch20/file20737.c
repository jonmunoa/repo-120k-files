// fichero 20737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20737;

Registro20737 crear_registro20737(int id) {
    Registro20737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
