// fichero 1153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1153;

Registro1153 crear_registro1153(int id) {
    Registro1153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
