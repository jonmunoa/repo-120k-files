// fichero 16645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16645;

Registro16645 crear_registro16645(int id) {
    Registro16645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
