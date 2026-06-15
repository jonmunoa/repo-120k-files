// fichero 41181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41181;

Registro41181 crear_registro41181(int id) {
    Registro41181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
