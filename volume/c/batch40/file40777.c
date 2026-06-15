// fichero 40777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40777;

Registro40777 crear_registro40777(int id) {
    Registro40777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
