// fichero 9113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9113;

Registro9113 crear_registro9113(int id) {
    Registro9113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
