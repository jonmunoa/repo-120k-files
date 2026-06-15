// fichero 9913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9913;

Registro9913 crear_registro9913(int id) {
    Registro9913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
