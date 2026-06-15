// fichero 9233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9233;

Registro9233 crear_registro9233(int id) {
    Registro9233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
