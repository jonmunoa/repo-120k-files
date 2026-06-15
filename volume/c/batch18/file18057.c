// fichero 18057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18057;

Registro18057 crear_registro18057(int id) {
    Registro18057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
