// fichero 18737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18737;

Registro18737 crear_registro18737(int id) {
    Registro18737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
