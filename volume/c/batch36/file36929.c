// fichero 36929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36929;

Registro36929 crear_registro36929(int id) {
    Registro36929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
