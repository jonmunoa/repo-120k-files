// fichero 8057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8057;

Registro8057 crear_registro8057(int id) {
    Registro8057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
