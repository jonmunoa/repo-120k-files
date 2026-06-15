// fichero 9009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9009;

Registro9009 crear_registro9009(int id) {
    Registro9009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
