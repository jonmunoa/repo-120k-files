// fichero 3905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3905;

Registro3905 crear_registro3905(int id) {
    Registro3905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
