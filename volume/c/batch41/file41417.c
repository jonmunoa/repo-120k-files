// fichero 41417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41417;

Registro41417 crear_registro41417(int id) {
    Registro41417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
