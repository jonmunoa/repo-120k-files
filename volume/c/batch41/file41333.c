// fichero 41333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41333;

Registro41333 crear_registro41333(int id) {
    Registro41333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
