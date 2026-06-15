// fichero 20777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20777;

Registro20777 crear_registro20777(int id) {
    Registro20777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
