// fichero 9857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9857;

Registro9857 crear_registro9857(int id) {
    Registro9857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
