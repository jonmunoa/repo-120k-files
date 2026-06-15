// fichero 34933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34933;

Registro34933 crear_registro34933(int id) {
    Registro34933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
