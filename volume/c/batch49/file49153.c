// fichero 49153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49153;

Registro49153 crear_registro49153(int id) {
    Registro49153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
