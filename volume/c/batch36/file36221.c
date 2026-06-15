// fichero 36221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36221;

Registro36221 crear_registro36221(int id) {
    Registro36221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
