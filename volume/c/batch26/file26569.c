// fichero 26569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26569;

Registro26569 crear_registro26569(int id) {
    Registro26569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
