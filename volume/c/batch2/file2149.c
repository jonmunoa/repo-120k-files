// fichero 2149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2149;

Registro2149 crear_registro2149(int id) {
    Registro2149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
