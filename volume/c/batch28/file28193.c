// fichero 28193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28193;

Registro28193 crear_registro28193(int id) {
    Registro28193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
