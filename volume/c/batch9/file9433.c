// fichero 9433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9433;

Registro9433 crear_registro9433(int id) {
    Registro9433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
