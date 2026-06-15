// fichero 6265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6265;

Registro6265 crear_registro6265(int id) {
    Registro6265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
