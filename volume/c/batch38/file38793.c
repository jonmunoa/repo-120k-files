// fichero 38793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38793;

Registro38793 crear_registro38793(int id) {
    Registro38793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
