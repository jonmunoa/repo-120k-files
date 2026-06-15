// fichero 28945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28945;

Registro28945 crear_registro28945(int id) {
    Registro28945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
