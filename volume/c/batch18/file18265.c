// fichero 18265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18265;

Registro18265 crear_registro18265(int id) {
    Registro18265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
