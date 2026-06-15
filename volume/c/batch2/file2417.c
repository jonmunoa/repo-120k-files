// fichero 2417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2417;

Registro2417 crear_registro2417(int id) {
    Registro2417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
