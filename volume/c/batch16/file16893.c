// fichero 16893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16893;

Registro16893 crear_registro16893(int id) {
    Registro16893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
