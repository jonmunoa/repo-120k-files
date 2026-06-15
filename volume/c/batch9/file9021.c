// fichero 9021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9021;

Registro9021 crear_registro9021(int id) {
    Registro9021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
