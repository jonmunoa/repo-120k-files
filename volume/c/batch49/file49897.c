// fichero 49897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49897;

Registro49897 crear_registro49897(int id) {
    Registro49897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
