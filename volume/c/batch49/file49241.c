// fichero 49241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49241;

Registro49241 crear_registro49241(int id) {
    Registro49241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
