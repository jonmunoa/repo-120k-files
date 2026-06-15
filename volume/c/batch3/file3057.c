// fichero 3057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3057;

Registro3057 crear_registro3057(int id) {
    Registro3057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
