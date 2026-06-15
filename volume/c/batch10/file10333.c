// fichero 10333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10333;

Registro10333 crear_registro10333(int id) {
    Registro10333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
