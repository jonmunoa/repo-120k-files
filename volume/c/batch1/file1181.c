// fichero 1181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1181;

Registro1181 crear_registro1181(int id) {
    Registro1181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
