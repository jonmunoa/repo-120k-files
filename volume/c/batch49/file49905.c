// fichero 49905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49905;

Registro49905 crear_registro49905(int id) {
    Registro49905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
