// fichero 41913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41913;

Registro41913 crear_registro41913(int id) {
    Registro41913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
