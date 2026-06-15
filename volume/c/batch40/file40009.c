// fichero 40009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40009;

Registro40009 crear_registro40009(int id) {
    Registro40009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
