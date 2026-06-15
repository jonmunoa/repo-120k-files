// fichero 30893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30893;

Registro30893 crear_registro30893(int id) {
    Registro30893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
