// fichero 21249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21249;

Registro21249 crear_registro21249(int id) {
    Registro21249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
