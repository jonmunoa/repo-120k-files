// fichero 35169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35169;

Registro35169 crear_registro35169(int id) {
    Registro35169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
