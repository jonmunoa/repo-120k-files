// fichero 9157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9157;

Registro9157 crear_registro9157(int id) {
    Registro9157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
