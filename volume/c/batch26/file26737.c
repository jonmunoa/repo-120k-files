// fichero 26737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26737;

Registro26737 crear_registro26737(int id) {
    Registro26737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
