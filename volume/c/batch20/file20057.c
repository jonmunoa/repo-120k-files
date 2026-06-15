// fichero 20057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20057;

Registro20057 crear_registro20057(int id) {
    Registro20057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
