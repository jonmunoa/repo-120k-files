// fichero 16001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16001;

Registro16001 crear_registro16001(int id) {
    Registro16001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
