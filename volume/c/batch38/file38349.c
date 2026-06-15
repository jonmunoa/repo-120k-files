// fichero 38349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38349;

Registro38349 crear_registro38349(int id) {
    Registro38349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
