// fichero 9873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9873;

Registro9873 crear_registro9873(int id) {
    Registro9873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
