// fichero 9909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9909;

Registro9909 crear_registro9909(int id) {
    Registro9909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
