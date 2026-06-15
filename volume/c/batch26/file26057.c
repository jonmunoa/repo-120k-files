// fichero 26057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26057;

Registro26057 crear_registro26057(int id) {
    Registro26057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
