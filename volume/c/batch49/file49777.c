// fichero 49777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49777;

Registro49777 crear_registro49777(int id) {
    Registro49777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
